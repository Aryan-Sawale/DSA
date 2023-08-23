packet = ["lint","code","love","you"]

def encode(packet):
    encoded = "\n".join(packet)
    return encoded 

def decode(encoded):
    decoded = encoded.split("\n")
    return decoded

encoded = encode(packet)
print(decode(encoded))