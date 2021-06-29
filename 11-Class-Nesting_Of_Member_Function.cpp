#include <iostream>
using namespace std;

// ***************************** Nesting Function ********************************

class Binary
{
      string s;
      void check_binary(void);

public:
      void read(void)
      {
            cout << "Enter the Binary Number : ";
            cin >> s;
      }

      void once_complememt(void);

      void display()
      {
            cout << s << endl;
      }
};

void Binary ::check_binary(void)
{
      bool n = true;
      for (int i = 0; i < s.length(); i++)
      {

            if (s[i] != '0' && s[i] != '1')
            {
                  n = false;
                  cout << "Enter Number is not a Binary Num" << endl;
                  break;
            }
      };
      if (n == true)
      {
            cout << "Enter Number is a Binary Num" << endl;
      }
}

void Binary ::once_complememt(void)
{

      check_binary(); /* <<<==================== Nested Function =============== */

      for (int i = 0; i < s.length(); i++)
      {
            /* code */

            if (s[i] == '0')
            {
                  s[i] = '1';
            }
            else
            {
                  s[i] = '0';
            };
      };
      cout << "Once Complement" << endl;
}

int main()
{
      Binary first;
      first.read();
      // first.check_binary();
      first.display();
      first.once_complememt();
      first.display();

      return 0;
}