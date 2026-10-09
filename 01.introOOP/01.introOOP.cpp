#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Student
{
private:
    string pib;
    string birthDate;
    string phone;
    string city;
    string country;
    string university;
    string universityCity;
    string universityCountry;
    string group;

public:
    void Input()
    {
        cout << "Введіть ПІБ: ";
        getline(cin, pib);

        cout << "Введіть дату народження: ";
        getline(cin, birthDate);

        cout << "Введіть телефон: ";
        getline(cin, phone);

        cout << "Введіть місто проживання: ";
        getline(cin, city);

        cout << "Введіть країну проживання: ";
        getline(cin, country);

        cout << "Введіть назву навчального закладу: ";
        getline(cin, university);

        cout << "Введіть місто навчального закладу: ";
        getline(cin, universityCity);

        cout << "Введіть країну навчального закладу: ";
        getline(cin, universityCountry);

        cout << "Введіть номер групи: ";
        getline(cin, group);
    }

    void Show()
    {
        cout << "\n--- Інформація про студента ---\n";
        cout << "ПІБ: " << pib << endl;
        cout << "Дата народження: " << birthDate << endl;
        cout << "Телефон: " << phone << endl;
        cout << "Місто: " << city << endl;
        cout << "Країна: " << country << endl;
        cout << "Навчальний заклад: " << university << endl;
        cout << "Місто навчального закладу: " << universityCity << endl;
        cout << "Країна навчального закладу: " << universityCountry << endl;
        cout << "Група: " << group << endl;
    }

    
    string GetPib()
    {
        return pib;
    }

    void SetPib(string value)
    {
        pib = value;
    }

    string GetPhone()
    {
        return phone;
    }

    void SetPhone(string value)
    {
        phone = value;
    }

    string GetGroup()
    {
        return group;
    }

    void SetGroup(string value)
    {
        group = value;
    }
};

int main()
{
    setlocale(LC_ALL, "");

    Student s;

    s.Input();
    s.Show();

    cout << "\nДоступ через аксесор:\n";
    cout << "ПІБ: " << s.GetPib() << endl;
    cout << "Телефон: " << s.GetPhone() << endl;
    cout << "Група: " << s.GetGroup() << endl;

    return 0;
}





//2




class Point
{
private:
    double x, y, z;

public:
    void Input()
    {
        cout << "Введіть координату x: ";
        cin >> x;

        cout << "Введіть координату y: ";
        cin >> y;

        cout << "Введіть координату z: ";
        cin >> z;
    }

    void Show()
    {
        cout << "Координати точки: ";
        cout << "x = " << x << ", ";
        cout << "y = " << y << ", ";
        cout << "z = " << z << endl;
    }

    
    double GetX()
    {
        return x;
    }

    void SetX(double value)
    {
        x = value;
    }

    double GetY()
    {
        return y;
    }

    void SetY(double value)
    {
        y = value;
    }

    double GetZ()
    {
        return z;
    }

    void SetZ(double value)
    {
        z = value;
    }

    
    void SaveToFile()
    {
        ofstream file("point.txt");

        if (file.is_open())
        {
            file << x << " " << y << " " << z;
            file.close();

            cout << "Дані збережено у файл!\n";
        }
        else
        {
            cout << "Помилка відкриття файлу!\n";
        }
    }

    
    void LoadFromFile()
    {
        ifstream file("point.txt");

        if (file.is_open())
        {
            file >> x >> y >> z;
            file.close();

            cout << "Дані завантажено з файлу!\n";
        }
        else
        {
            cout << "Помилка відкриття файлу!\n";
        }
    }
};

int main()
{
    setlocale(LC_ALL, "");

    Point p;

    p.Input();
    p.Show();

    p.SaveToFile();

    
    p.SetX(0);
    p.SetY(0);
    p.SetZ(0);

    cout << "\nПісля зміни координат:\n";
    p.Show();

    
    p.LoadFromFile();

    cout << "\nПісля завантаження з файлу:\n";
    p.Show();

    return 0;
}