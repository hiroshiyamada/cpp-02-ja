class BankAccount
{
public:
    BankAccount(double balance);
    void deposit(double num);
    void withdraw(double num);
    double get_balance() const;

private:
    double balance;
    void print_current_money() const;
};