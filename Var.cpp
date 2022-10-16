#include <iostream>
using namespace std;

class Var
{
    int a;
    double b;
    char* c;
public:
    Var();
    ~Var();
    Var(int obj);
    Var(double obj);
    Var(const char* obj);
    Var(int A, double B, const char* C);
    Var& operator+(const Var& obj);
    Var& operator-(const Var& obj);
    Var& operator+=(const Var& obj);
    Var& operator-=(const Var& obj);
    Var& operator*(const Var& obj);
    Var& operator/(const Var& obj);
    Var& operator*=(const Var& obj);
    Var& operator/=(const Var& obj);
    bool operator>(const Var& obj);
    bool operator<(const Var& obj);
    bool operator>=(const Var& obj);
    bool operator<=(const Var& obj);
    bool operator!=(const Var& obj);
    bool operator==(const Var& obj);
    void operator ()();



};
Var::Var()
{
    a = 0; b = 0.0;
    c = nullptr;
}

Var::~Var()
{
    delete[]c;
}

Var::Var(int obj)
{
    a = obj;
}

Var::Var(double obj)
{
    b = obj;
}

Var::Var(const char* obj)
{
    c = new char[strlen(c) + 1];
    strcpy_s(c, strlen(c) + 1, obj);
}

Var::Var(int A, double B, const char* C)
{
    a = A;
    b = B;
    c = new char(strlen(c) + 1);
    strcpy_s(c, strlen(c) + 1, C);

}

Var& Var::operator+(const Var& obj)
{
    Var buffer;
    if (a != 0)
    {
        if (obj.a != 0)
        {
            buffer.a = a + obj.a;
        }
        else if (obj.b != 0)
        {
            buffer.a = a + obj.b;
        }
        else if (obj.c != nullptr)
        {
            buffer.a = a + atoi(obj.c);
        }
        else
        {
            buffer.a = a;
        }
    }
    else if (b != 0)
    {
        if (obj.a != 0)
        {
            buffer.b = b + obj.a;
        }
        else if (obj.b)
        {
            buffer.b = b + obj.b;
        }
        else if (obj.c)
        {
            buffer.b = b + atof(obj.c);
        }
        else
        {
            buffer.c = c;
        }
    }
    else if (c != nullptr)
    {
        if (obj.a)
        {
            char zer[50];
            _itoa_s(obj.a, zer, 20);
            strcpy_s(zer, strlen(c) + strlen(zer) + 1, c);
            strcat_s(buffer.c, strlen(c) + strlen(zer) + 1, zer);
        }
        else if (obj.b)
        {
            char zer[50];
            _itoa_s(obj.a, zer, 20);
            strcpy_s(zer, strlen(c) + strlen(zer) + 1, c);
            strcat_s(buffer.c, strlen(c) + strlen(zer) + 1, zer);
        }
        else
        {
            buffer.c = c;
        }
    }
    return buffer;
}

Var& Var::operator-(const Var& obj)
{
    Var buffer;
    if (a != 0)
    {
        if (obj.a != 0)
        {
            buffer.a = a - obj.a;
        }
        else if (obj.b != 0)
        {
            buffer.a = a - obj.b;
        }
        else if (obj.c != nullptr)
        {
            buffer.a = a - atoi(obj.c);
        }
        else
        {
            buffer.a = a;
        }
    }
    else if (b != 0)
    {
        if (obj.a != 0)
        {
            buffer.b = b - obj.a;
        }
        else if (obj.b)
        {
            buffer.b = b - obj.b;
        }
        else if (obj.c)
        {
            buffer.b = b - atof(obj.c);
        }
        else
        {
            buffer.c = c;
        }
    }
    else if (c != nullptr)
    {
        if (obj.a)
        {
            char zer[50];
            _itoa_s(obj.a, zer, 20);
            strcpy_s(zer, strlen(c) - strlen(zer) + 1, c);
            strcat_s(buffer.c, strlen(c) - strlen(zer) + 1, zer);
        }
        else if (obj.b)
        {
            char zer[50];
            _itoa_s(obj.a, zer, 20);
            strcpy_s(zer, strlen(c) - strlen(zer) + 1, c);
            strcat_s(buffer.c, strlen(c) - strlen(zer) + 1, zer);
        }
        else
        {
            buffer.c = c;
        }
    }
    return buffer;
}

Var& Var::operator+=(const Var& obj)
{

    if (a != 0)
    {
        if (obj.a != 0)
        {
            a += obj.a;
        }
        else if (obj.b != 0)
        {
            a += obj.b;
        }
        else if (obj.c != nullptr)
        {
            a += atoi(obj.c);
        }

    }
    else if (b != 0)
    {
        if (obj.a != 0)
        {
            b += obj.a;
        }
        else if (obj.b)
        {
            b += obj.b;
        }
        else if (obj.c)
        {
            b += atof(obj.c);
        }

    }
    else if (c != nullptr)
    {


    }
    return *this;
}

Var& Var::operator-=(const Var& obj)
{
    if (a != 0)
    {
        if (obj.a != 0)
        {
            a -= obj.a;
        }
        else if (obj.b != 0)
        {
            a -= obj.b;
        }
        else if (obj.c != nullptr)
        {
            a -= atoi(obj.c);
        }

    }
    else if (b != 0)
    {
        if (obj.a != 0)
        {
            b -= obj.a;
        }
        else if (obj.b)
        {
            b -= obj.b;
        }
        else if (obj.c)
        {
            b -= atof(obj.c);
        }

    }
    else if (c != nullptr)
    {

    }
    return *this;
}

Var& Var::operator*(const Var& obj)
{
    Var buffer;
    if (a != 0)
    {
        if (obj.a != 0)
        {
            buffer.a = a * obj.a;
        }
        else if (obj.b != 0)
        {
            buffer.a = a * obj.b;
        }
        else if (obj.c != nullptr)
        {
            buffer.a = a * atoi(obj.c);
        }
        else
        {
            buffer.a = a;
        }
    }
    else if (b != 0)
    {
        if (obj.a != 0)
        {
            buffer.b = b * obj.a;
        }
        else if (obj.b)
        {
            buffer.b = b * obj.b;
        }
        else if (obj.c)
        {
            buffer.b = b * atof(obj.c);
        }
        else
        {
            buffer.c = c;
        }
    }
    else if (c != nullptr)
    {

        if (obj.c != nullptr && c != nullptr)
        {
            int counter = 0;
            for (int i = 0; i < strlen(obj.c); i++)
            {
                for (int j = 0; j < strlen(c); i++)
                {
                    if (c[j] = obj.c[i])
                    {
                        counter++;
                    }
                }
            }
            cout << counter << endl;
        }
    }
    return buffer;
}

Var& Var::operator/(const Var& obj)
{
    Var buffer;
    if (a != 0)
    {
        if (obj.a != 0)
        {
            buffer.a = a / obj.a;
        }
        else if (obj.b != 0)
        {
            buffer.a = a / obj.b;
        }
        else if (obj.c != 0)
        {
            buffer.a = a / atof(obj.c);
        }
        else
        {
            buffer.a = a;
        }
    }
    else if (b != 0)
    {
        if (obj.a != 0)
        {
            buffer.b = b / obj.a;
        }
        else if (obj.b != 0)
        {
            buffer.b = b / obj.b;
        }
        else if (obj.c != nullptr)
        {
            buffer.b = b * atof(obj.c);
        }
        else
        {
            buffer.b = b;
        }
    }
    else if (c != nullptr)
    {

        if (obj.c != nullptr && c != nullptr)
        {
            int counter = 0;
            for (int i = 0; i < strlen(obj.c); i++)
            {
                for (int j = 0; j < strlen(c); i++)
                {
                    if (c[j] != obj.c[i])
                    {
                        counter++;
                    }
                }
            }
            cout << counter << endl;
        }
    }
    return buffer;
}

Var& Var::operator*=(const Var& obj)
{

    if (a != 0)
    {
        if (obj.a != 0)
        {
            a *= obj.a;
        }
        else if (obj.b != 0)
        {
            a *= obj.b;
        }
        else if (obj.c != nullptr)
        {
            a *= atoi(obj.c);
        }
        else
        {

        }
    }
    else if (b != 0)
    {
        if (obj.a != 0)
        {
            b *= obj.a;
        }
        else if (obj.b)
        {
            b *= obj.b;
        }
        else if (obj.c)
        {
            b *= atof(obj.c);
        }
        else
        {

        }
    }
    else if (c != nullptr)
    {

        if (obj.c != nullptr && c != nullptr)
        {
            int counter = 0;
            for (int i = 0; i < strlen(obj.c); i++)
            {
                for (int j = 0; j < strlen(c); i++)
                {
                    if (c[j] == obj.c[i])
                    {
                        counter++;
                    }
                }
            }
            cout << counter << endl;
        }
    }
    return *this;
}

Var& Var::operator/=(const Var& obj)
{
    if (a != 0)
    {
        if (obj.a != 0)
        {
            a *= obj.a;
        }
        else if (obj.b != 0)
        {
            a *= obj.b;
        }
        else if (obj.c != nullptr)
        {
            a *= atoi(obj.c);
        }
        else
        {

        }
    }
    else if (b != 0)
    {
        if (obj.a != 0)
        {
            b *= obj.a;
        }
        else if (obj.b)
        {
            b *= obj.b;
        }
        else if (obj.c)
        {
            b *= atof(obj.c);
        }
        else
        {

        }
    }
    else if (c != nullptr)
    {

        if (obj.c != nullptr && c != nullptr)
        {
            int counter = 0;
            for (int i = 0; i < strlen(obj.c); i++)
            {
                for (int j = 0; j < strlen(c); i++)
                {
                    if (c[j] == obj.c[i])
                    {
                        counter++;
                    }
                }
            }
            cout << counter << endl;
        }
    }
    return *this;
}

bool Var::operator>(const Var& obj)
{
    if (a != 0)
    {
        if (obj.a != 0)
        {
            if (a > obj.a)
            {
                return true;
            }
            else
            {
                return false;
            }

        }
        else if (obj.b != 0)
        {
            if (a > obj.b)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else if (obj.c != 0)
        {
            if (a > atoi(obj.c))
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
    else if (b != 0)
    {
        if (obj.a != 0)
        {
            if (b > obj.a)
            {
                return true;
            }
            else
            {
                return false;
            }

        }
        else if (obj.b != 0)
        {
            if (b > obj.b)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else if (obj.c != 0)
        {
            if (b > atof(obj.c))
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
    else if (c != 0)
    {
        if (obj.a != 0)
        {

            char buffer[20];
            itoa(obj.a, buffer, 10);
            if (strlen(c) > strlen(buffer))
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else if (obj.b != 0)
        {
            char buffer[20];
            itoa(obj.b, buffer, 10);
            if (strlen(c) > strlen(buffer))
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else if (obj.c != 0)
        {
            if (strlen(c) > strlen(obj.c))
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
}

bool Var::operator<(const Var& obj)
{
    if (a != 0)
    {
        if (obj.a != 0)
        {
            if (a < obj.a)
            {
                return true;
            }
            else
            {
                return false;
            }

        }
        else if (obj.b != 0)
        {
            if (a < obj.b)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else if (obj.c != 0)
        {
            if (a < atoi(obj.c))
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
    else if (b != 0)
    {
        if (obj.a != 0)
        {
            if (b < obj.a)
            {
                return true;
            }
            else
            {
                return false;
            }

        }
        else if (obj.b != 0)
        {
            if (b < obj.b)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else if (obj.c != 0)
        {
            if (b < atof(obj.c))
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
    else if (c != 0)
    {
        if (obj.a != 0)
        {

            char buffer[20];
            itoa(obj.a, buffer, 10);
            if (strlen(c) < strlen(buffer))
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else if (obj.b != 0)
        {
            char buffer[20];
            itoa(obj.b, buffer, 10);
            if (strlen(c) < strlen(buffer))
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else if (obj.c != 0)
        {
            if (strlen(c) < strlen(obj.c))
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
}

bool Var::operator>=(const Var& obj)
{
    if (a != 0)
    {
        if (obj.a != 0)
        {
            if (a >= obj.a)
            {
                return true;
            }
            else
            {
                return false;
            }

        }
        else if (obj.b != 0)
        {
            if (a >= obj.b)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else if (obj.c != 0)
        {
            if (a >= atoi(obj.c))
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
    else if (b != 0)
    {
        if (obj.a != 0)
        {
            if (b >= obj.a)
            {
                return true;
            }
            else
            {
                return false;
            }

        }
        else if (obj.b != 0)
        {
            if (b >= obj.b)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else if (obj.c != 0)
        {
            if (b >= atof(obj.c))
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
    else if (c != 0)
    {
        if (obj.a != 0)
        {

            char buffer[20];
            itoa(obj.a, buffer, 10);
            if (strlen(c) >= strlen(buffer))
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else if (obj.b != 0)
        {
            char buffer[20];
            itoa(obj.b, buffer, 10);
            if (strlen(c) >= strlen(buffer))
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else if (obj.c != 0)
        {
            if (strlen(c) >= strlen(obj.c))
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
}

bool Var::operator<=(const Var& obj)
{
    if (a != 0)
    {
        if (obj.a != 0)
        {
            if (a <= obj.a)
            {
                return true;
            }
            else
            {
                return false;
            }

        }
        else if (obj.b != 0)
        {
            if (a <= obj.b)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else if (obj.c != 0)
        {
            if (a <= atoi(obj.c))
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
    else if (b != 0)
    {
        if (obj.a != 0)
        {
            if (b <= obj.a)
            {
                return true;
            }
            else
            {
                return false;
            }

        }
        else if (obj.b != 0)
        {
            if (b <= obj.b)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else if (obj.c != 0)
        {
            if (b <= atof(obj.c))
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
    else if (c != 0)
    {
        if (obj.a != 0)
        {

            char buffer[20];
            itoa(obj.a, buffer, 10);
            if (strlen(c) <= strlen(buffer))
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else if (obj.b != 0)
        {
            char buffer[20];
            itoa(obj.b, buffer, 10);
            if (strlen(c) <= strlen(buffer))
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else if (obj.c != 0)
        {
            if (strlen(c) <= strlen(obj.c))
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
}

bool Var::operator!=(const Var& obj)
{
    if (a != 0)
    {
        if (obj.a != 0)
        {
            if (a != obj.a)
            {
                return true;
            }
            else
            {
                return false;
            }

        }
        else if (obj.b != 0)
        {
            if (a != obj.b)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else if (obj.c != 0)
        {
            if (a != atoi(obj.c))
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
    else if (b != 0)
    {
        if (obj.a != 0)
        {
            if (b != obj.a)
            {
                return true;
            }
            else
            {
                return false;
            }

        }
        else if (obj.b != 0)
        {
            if (b != obj.b)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else if (obj.c != 0)
        {
            if (b != atof(obj.c))
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
    else if (c != 0)
    {
        if (obj.a != 0)
        {

            char buffer[20];
            itoa(obj.a, buffer, 10);
            if (strlen(c) != strlen(buffer))
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else if (obj.b != 0)
        {
            char buffer[20];
            itoa(obj.b, buffer, 10);
            if (strlen(c) != strlen(buffer))
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else if (obj.c != 0)
        {
            if (strlen(c) != strlen(obj.c))
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
}

bool Var::operator==(const Var& obj)
{
    if (a != 0)
    {
        if (obj.a != 0)
        {
            if (a == obj.a)
            {
                return true;
            }
            else
            {
                return false;
            }

        }
        else if (obj.b != 0)
        {
            if (a == obj.b)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else if (obj.c != 0)
        {
            if (a == atoi(obj.c))
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
    else if (b != 0)
    {
        if (obj.a != 0)
        {
            if (b == obj.a)
            {
                return true;
            }
            else
            {
                return false;
            }

        }
        else if (obj.b != 0)
        {
            if (b == obj.b)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else if (obj.c != 0)
        {
            if (b == atof(obj.c))
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
    else if (c != 0)
    {
        if (obj.a != 0)
        {

            char buffer[20];
            itoa(obj.a, buffer, 10);
            if (strlen(c) == strlen(buffer))
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else if (obj.b != 0)
        {
            char buffer[20];
            itoa(obj.b, buffer, 10);
            if (strlen(c) == strlen(buffer))
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else if (obj.c != 0)
        {
            if (strlen(c) == strlen(obj.c))
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
}

void Var::operator()()
{
    if (c != nullptr)
    {
        cout << c << endl;
    }
    else if (a != 0)
    {
        cout << a << endl;
    }
    else if (b != 0)
    {
        cout << b << endl;
    }
}

int main()
{

    Var a = 10;
    Var b = 2.5;
    Var c = a + b;
    a();
    cout << endl;
    b();
    cout << endl;
    c();

}
