packet = ["lint","code","love","you"]

def encode(packet):
    encoded = ""
    size = len(packet)
    for i in range(size):
        if (i == size - 1):
            encoded += packet[i]
            continue

        encoded += packet[i] + "\n"

    return encoded 

def decode(encoded):
    decoded = encoded.split("\n")
    return decoded

encoded = encode(packet)
print(decode(encoded))