from expense import Expense
from manager import expensemanager


def main():
    manager = expensemanager()

    while True:
        print("\n====== Expense Tracker ======")
        print("1. Add Expense")
        print("2. List Expenses")
        print("3. Total Spent")
        print("4. Total by Category")
        print("5. Exit")

        choice = input("Choose an option: ")

        if choice == "1":
            title = input("Title: ")
            amount = float(input("Amount: "))
            category = input("Category: ")

            expense = Expense(title, amount, category)
            manager.add_expense(expense)

            print("✅ Expense added successfully")

        elif choice == "2":
            manager.list_expense()

        elif choice == "3":
            print("💰 Total Spent:", manager.total_spent())

        elif choice == "4":
            category = input("Enter category: ")
            print(
                f"📊 Total for {category}:",
                manager.total_by_category(category)
            )

        elif choice == "5":
            print("👋 Exiting Expense Tracker")
            break

        else:
            print("❌ Invalid choice, try again")


if __name__ == "__main__":
    main()
