class invalidexpenseerror(Exception):
    """Raised when an error occurs"""
    pass

class expense:
    def __init__(self,title: str, amount : float, category: str):
        if amount <=0:
            raise invalidexpenseerror("Amount cannot be smaller than zero")
        
        self.title = title
        self.category = category
        self.amount = amount

    def __str__(self) -> str:
        return f"{self.title} | ${self.amount} | {self.category}"
    

    def to_dict(self) -> dict:
        return{
            "title" : self.title,
            "amount" : self.amount,
            "category" : self.category
        }