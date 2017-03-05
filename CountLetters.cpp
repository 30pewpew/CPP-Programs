#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void CountLetters(string docname)
{
    // Declarations
    char word;
    int endofdoc = 0;
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int e = 0;
    int f = 0;
    int g = 0;
    int h = 0;
    int i = 0;
    int j = 0;
    int k = 0;
    int l = 0;
    int m = 0;
    int n = 0;
    int o = 0;
    int p = 0;
    int q = 0;
    int r = 0;
    int s = 0;
    int t = 0;
    int u = 0;
    int v = 0;
    int w = 0;
    int x = 0;
    int y = 0;
    int z = 0;

    ifstream theFile(docname.c_str(), ios::in);

    // If the filename inputted isn't available
    if (!theFile)
    {
        cout << "File not opened successfully" << endl;
        endofdoc = 0;
    }

    // While there are still words in the file
    while(theFile >> word)
    {
        // Count Letters
        if (tolower(word) == 'a')
        {
            a++;
        }
        if (tolower(word) == 'b')
        {
            b++;
        }
        if (tolower(word) == 'c')
        {
            c++;
        }
        if (tolower(word) == 'd')
        {
            d++;
        }
        if (tolower(word) == 'e')
        {
            e++;
        }
        if (tolower(word) == 'f')
        {
            f++;
        }
        if (tolower(word) == 'g')
        {
            g++;
        }
        if (tolower(word) == 'h')
        {
            h++;
        }
        if (tolower(word) == 'i')
        {
            i++;
        }
        if (tolower(word) == 'j')
        {
            j++;
        }
        if (tolower(word) == 'k')
        {
            k++;
        }
        if (tolower(word) == 'l')
        {
            l++;
        }
        if (tolower(word) == 'm')
        {
            m++;
        }
        if (tolower(word) == 'n')
        {
            n++;
        }
        if (tolower(word) == 'o')
        {
            o++;
        }
        if (tolower(word) == 'p')
        {
            p++;
        }
        if (tolower(word) == 'q')
        {
            q++;
        }
        if (tolower(word) == 'r')
        {
            r++;
        }
        if (tolower(word) == 's')
        {
            s++;
        }
        if (tolower(word) == 't')
        {
            t++;
        }
        if (tolower(word) == 'u')
        {
            u++;
        }
        if (tolower(word) == 'v')
        {
            v++;
        }
        if (tolower(word) == 'w')
        {
            w++;
        }
        if (tolower(word) == 'x')
        {
            x++;
        }
        if (tolower(word) == 'y')
        {
            y++;
        }
        if (tolower(word) == 'z')
        {
            z++;
        }
        endofdoc = 1;
    }
    if (endofdoc == 1)
    {
        // Print How Many Letters
        cout << "a: " << a << endl;
        cout << "b: " << b << endl;
        cout << "c: " << c << endl;
        cout << "d: " << d << endl;
        cout << "e: " << e << endl;
        cout << "f: " << f << endl;
        cout << "g: " << g << endl;
        cout << "h: " << h << endl;
        cout << "i: " << i << endl;
        cout << "j: " << j << endl;
        cout << "k: " << k << endl;
        cout << "l: " << l << endl;
        cout << "m: " << m << endl;
        cout << "n: " << n << endl;
        cout << "o: " << o << endl;
        cout << "p: " << p << endl;
        cout << "q: " << q << endl;
        cout << "r: " << r << endl;
        cout << "s: " << s << endl;
        cout << "t: " << t << endl;
        cout << "u: " << u << endl;
        cout << "v: " << v << endl;
        cout << "w: " << w << endl;
        cout << "x: " << x << endl;
        cout << "y: " << y << endl;
        cout << "z: " << z << endl;
    }
    // Close the file
    theFile.close();
}

int main ()
{
    string filename, name;
    string extension = ".txt";

    cout << "Input filename: ";
    cin >> name;

    filename = name.append(extension);

    CountLetters(filename);
    return 0;
}
