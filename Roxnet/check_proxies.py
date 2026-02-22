import socket
import asyncio
from concurrent.futures import ThreadPoolExecutor

def check_proxy(proxy):
    try:
        ip, port = proxy.split(':')
        port = int(port)
        sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        sock.settimeout(5)
        result = sock.connect_ex((ip, port))
        sock.close()
        if result == 0:
            return proxy
    except:
        pass
    return None

async def main():
    with open('socks5.txt', 'r') as f:
        proxies = [line.strip() for line in f if line.strip()]
    
    loop = asyncio.get_event_loop()
    with ThreadPoolExecutor(max_workers=1000) as executor:
        futures = [loop.run_in_executor(executor, check_proxy, proxy) for proxy in proxies]
        results = await asyncio.gather(*futures)
        healthy = [r for r in results if r]
    
    with open('healthy.txt', 'w') as f:
        for proxy in healthy:
            f.write(proxy + '\n')
    
    print(f"Found {len(healthy)} healthy proxies")

if __name__ == '__main__':
    asyncio.run(main())