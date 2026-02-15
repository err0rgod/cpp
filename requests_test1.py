import requests 
from PIL import Image
from io  import BytesIO   
r = requests.get("https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcSVWYSOQwGJtQeKZX73fpnG_7C9Le_W3F6fyw&s")
i = Image.open(BytesIO(r.content))
fp=open("img.jpeg",'wb')
i.save(fp)
fp.close()