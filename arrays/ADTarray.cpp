#include <iostream>
using namespace std;
void funcout(int b, string a = "")
{
    cout << a << b << endl;
}
class myarray
{
public:
    int array_size;
    int used_size;
    int *ptr;
    myarray(int array_size2, int usedsize2)
    {
        array_size = array_size2;
        used_size = usedsize2;
        int *ptr1 = (int *)malloc(array_size2 * sizeof(int));
        ptr = ptr1;
    }
    void show()
    {
        for (int i = 0; i < used_size; i++)
        {
            cout << ptr[i] << endl;
        }
    }
    void setvalue()
    {
        for (int i = 0; i < used_size; i++)
        {
            ptr[i] = i + 1;
        }
    }
};

int main()
{
    myarray marks(10, 2);
    cout << marks.ptr << endl;
    marks.setvalue();
    marks.show();
    return 0;
}