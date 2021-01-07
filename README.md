<div align='center'>
  <img src="logo/UPbit_Logo.png" />
  <br/>
  <br/>
  <h1>Upbit Client</h1>
  <p>Upbit(업비트) Cryptocurrency Trading Market API Client</p>
  <p>Base: Upbit Official Open API</p>
</div>

# Install
```bash
pip install upbit-client
```

or

```bash
git clone https://github.com/uJhin/upbit-client.git
```

# API Documents
- [Python](https://github.com/uJhin/upbit-client/tree/main/swg_generated/python/docs)
- [CSharp](https://github.com/uJhin/upbit-client/tree/main/swg_generated/csharp/docs)
- [Java](https://github.com/uJhin/upbit-client/tree/main/swg_generated/java/docs)
- [Go](https://github.com/uJhin/upbit-client/tree/main/swg_generated/go/docs)
- [JavaScript](https://github.com/uJhin/upbit-client/tree/main/swg_generated/javascript)
- [Kotlin](https://github.com/uJhin/upbit-client/tree/main/swg_generated/kotlin)
- [PHP](https://github.com/uJhin/upbit-client/tree/main/swg_generated/php/SwaggerClient-php/docs)

# Examples
- Your API Keys
```python
# /v1/api_keys

from upbit.client import Upbit

access_key = "Your Access Key"
secret_key = "Your Secret Key"

client = Upbit(access_key, secret_key)
print(client.APIKey.APIKey_info().result())
```

- Buy Currency
```python
# /v1/orders

from upbit.client import Upbit

access_key = "Your Access Key"
secret_key = "Your Secret Key"

client = Upbit(access_key, secret_key)
order = client.Order.Order_new(
    market='KRW-BTC',
    side='bid',
    volume='0.1',
    price='3000000',
    ord_type='limit'
).result()
print(order)
```

- Sell Currency

```python
# /v1/orders

from upbit.client import Upbit

access_key = "Your Access Key"
secret_key = "Your Secret Key"

client = Upbit(access_key, secret_key)
order = client.Order.Order_new(
    market='KRW-BTC',
    side='sid',
    volume='0.1',
    price='3000000',
    ord_type='limit'
).result()
print(order)
```
