#include <iostream>
using namespace std;

int main()
{
  string product, name, adress, pMethod, option;
  int quantity;
  float prod, payment, change;
  float prices[5] = {158.00, 469.00, 135.00, 117.61, 118.00};

  cout << "Please enter your name: ";
  getline(cin, name);

  cout << "Please enter a valid adress: ";
  getline(cin, adress);

  cout << endl;

  cout << "Please select a payment method." << endl;
  cout << "Cash on Delivery" << endl;
  cout << "Credit / Debit Card" << endl;
  cout << "e-wallet" << endl;
  cout << endl;

  cout << "Payment Method: ";
  getline(cin, option);

  if (option == "Cash on Delivery" || option == "cash on delivery")
  {
    pMethod = "Cash on Delivery";
  }
  else if (option == "Credit Card" || option == "credit card")
  {
    pMethod = "Credit / Debit Card";
  }
  else if (option == "e-wallet")
  {
    pMethod = "e-wallet";
  }
  else
  {
    cout << "Invalid Payment Method";
  }

  cout << "\n=======================================[PRODUCT MENU]=======================================\n";
  cout << "No.\tProduct Name\tProduct Type\tProduct price\tProduct Quantity\n";
  cout << "1\tRebisco\t\tBiscuit Pack\t158.00\t\t10";
  cout << "\n";
  cout << "2\tPEPERO\t\tChocolate\t469.00\t\t10";
  cout << "\n";
  cout << "3\tKitKat\t\tChocolate\t135.00\t\t10";
  cout << "\n";
  cout << "4\tBread Stick\tBiscuit\t\t117.61\t\t10";
  cout << "\n";
  cout << "5\tFita\t\tBiscuit\t\t118.00\t\t10" << endl;
  cout << "=============================================================================================\n";

  cout << "Enter the product name you want to purchase: ";
  getline(cin, product);
  cout << "\n";

  if (product == "Rebisco")
  {
    cout << "The product you selected is " << product << endl;
    cout << "The cost of this product is 158.00\n\n";

    cout << "How many would you like to buy: ";
    cin >> quantity;
    cout << "\n";

    prod = quantity * prices[0];

    cout << "The amount you need to pay is: " << prod << endl;
    cout << "\n";
    cout << "Enter your payment here: ";
    cin >> payment;
    cout << "\n";

    if (payment > prod)
    {
      change = payment - prod;
      cout << "Your item is " << product << ", with a total amount of " << prod << endl;
      cout << "Your change is " << change << "\n\n";

      cout << "Thanks for buying, HAVE A NICE DAY!" << endl;
    }
    else
    {
      cout << "Insufficient Money!";
    }
  }

  else if (product == "PEPERO" || product == "Pepero")
  {
    cout << "The product you selected is " << product << endl;
    cout << "The cost of this product is 469.00\n\n";

    cout << "How many would you like to buy: ";
    cin >> quantity;
    cout << "\n";

    prod = quantity * prices[1];

    cout << "The amount you need to pay is: " << prod << endl;
    cout << "\n";
    cout << "Enter your payment here: ";
    cin >> payment;
    cout << "\n";
    if (payment > prod)
    {
      change = payment - prod;
      cout << "Your item is " << product << ", with a total amount of " << prod << endl;
      cout << "Your change is " << change << "\n\n";

      cout << "Thanks for buying, HAVE A NICE DAY!";
    }
    else
    {
      cout << "Insufficient Money!" << endl;
    }
  }

  else if (product == "KitKat" || product == "Kitkat")
  {
    cout << "The product you selected is " << product << endl;
    cout << "The cost of this product is 135.00\n\n";

    cout << "How many would you like to buy: ";
    cin >> quantity;
    cout << "\n";

    prod = quantity * prices[2];

    cout << "The amount you need to pay is: " << prod << endl;
    cout << "\n";
    cout << "Enter your payment here: ";
    cin >> payment;
    cout << "\n";
    if (payment > prod)
    {
      change = payment - prod;
      cout << "Your item is " << product << ", with a total amount of " << prod << endl;
      cout << "Your change is " << change << "\n\n";

      cout << "Thanks for buying, HAVE A NICE DAY!" << endl;
    }
    else
    {
      cout << "Insufficient Money!";
    }
  }

  else if (product == "Bread Stick" || product == "Bread stick")
  {
    cout << "The product you selected is " << product << endl;
    cout << "The cost of this product is 117.61\n\n";

    cout << "How many would you like to buy: ";
    cin >> quantity;
    cout << "\n";

    prod = quantity * prices[3];

    cout << "The amount you need to pay is: " << prod << endl;
    cout << "\n";
    cout << "Enter your payment here: ";
    cin >> payment;
    cout << "\n";
    if (payment > prod)
    {
      change = payment - prod;
      cout << "Your item is " << product << ", with a total amount of " << prod << endl;
      cout << "Your change is " << change << "\n\n";

      cout << "Thanks for buying, HAVE A NICE DAY!" << endl;
    }
    else
    {
      cout << "Insufficient Money!";
    }
  }

  else if (product == "Fita")
  {
    cout << "The product you selected is " << product << endl;
    cout << "The cost of this product is 118.00\n\n";

    cout << "How many would you like to buy: ";
    cin >> quantity;
    cout << "\n";

    prod = quantity * prices[4];

    cout << "The amount you need to pay is: " << prod << endl;

    cout << "\n";

    cout << "Enter your payment here: ";
    cin >> payment;
    cout << "\n";
    if (payment > prod)
    {
      change = payment - prod;
      cout << "Your item is " << product << ", with a total amount of " << prod << endl;
      cout << "Your change is " << change << "\n\n";

      cout << "Thanks for buying, HAVE A NICE DAY!" << endl;
    }
    else
    {
      cout << "Insufficient Money!";
    }
  }
  else
  {
    cout << "Out of Stock";
  }
  cout << endl;

  cout << "==============================================================\n";
  cout << "Product Name: " << product << "   Price: " << prod << endl;
  cout << "Amount: " << prod << endl
       << endl;
  cout << "Payment: " << payment << endl
       << endl;
  cout << "Change: " << change << endl
       << endl;
  cout << "Payment Method: " << pMethod << endl
       << endl;
  cout << "Courier: Standard" << endl
       << endl;
  cout << "==============================================================\n";
  cout << "Name: " << name << endl
       << endl;
  cout << "Address: " << adress << endl
       << endl;
  cout << "==============================================================\n";
}
