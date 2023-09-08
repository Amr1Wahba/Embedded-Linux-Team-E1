# This program finds bitcoin rate

import requests

URL = "https://api.coindesk.com/v1/bpi/currentprice.json"
Req = requests.get(URL)
print(Req.json()["bpi"]["USD"]["rate"])