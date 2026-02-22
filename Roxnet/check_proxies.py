import requests
from concurrent.futures import ThreadPoolExecutor, as_completed

def check_proxy(proxy):
    try:
        proxies = {
            'http': f'socks5://{proxy}',
            'https': f'socks5://{proxy}'
        }
        response = requests.get('http://httpbin.org/ip', proxies=proxies, timeout=10)
        if response.status_code == 200:
            return proxy
    except:
        pass
    return None

def main():
    with open('socks5.txt', 'r') as f:
        proxies = [line.strip() for line in f if line.strip()]
    
    healthy = []
    with ThreadPoolExecutor(max_workers=100) as executor:
        futures = [executor.submit(check_proxy, proxy) for proxy in proxies]
        for future in as_completed(futures):
            result = future.result()
            if result:
                healthy.append(result)
                print(f"Healthy: {result}")
    
    with open('healthy.txt', 'w') as f:
        for proxy in healthy:
            f.write(proxy + '\n')

if __name__ == '__main__':
    main()