class RBI:
    def __init__(self, rate):
        self.rate = rate

    def getROI(self):
        return self.rate


class SBI(RBI):
    def __init__(self):
        # Inherit rate attribute from RBI
        super().__init__(7.5)


class BOB(RBI):
    def __init__(self):
        # Inherit rate attribute from RBI
        super().__init__(7.2)


class ICICI(RBI):
    def __init__(self):
        # Inherit rate attribute from RBI
        super().__init__(8.0)


# Creating objects for different banks
sbi_bank = SBI()
bob_bank = BOB()
icici_bank = ICICI()

# Printing the rate of interest for each bank
print("Rate of Interest for SBI:", sbi_bank.getROI())
print("Rate of Interest for BOB:", bob_bank.getROI())
print("Rate of Interest for ICICI:", icici_bank.getROI())
