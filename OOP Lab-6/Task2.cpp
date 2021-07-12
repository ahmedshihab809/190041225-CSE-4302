#include<iostream>
using namespace std;
class Matrix3D
{
private:
    double m[3][3];
public:
    Matrix3D()
    {
        for(int i=0; i<3; i++)
            for(int j=0; j<3; j++)
                m[i][j]=0;
    }
    Matrix3D(double arr[3][3])
    {
        for(int i=0; i<3; i++)
            for(int j=0; j<3; j++)
                m[i][j]=arr[i][j];
    }
    double det()
    {
        int temp =   m[0][0] * (m[1][1] * m[2][2] - m[2][1]* m[1] [2]) -
                     m[0][1] * (m[1][0] * m[2][2] - m[1][2] * m[2][0]) +
                     m[0][2] * (m[1][0] * m[2][1] - m[1][1] * m[2][0]);
        return abs(temp);
    }
    Matrix3D inverse()
    {
        Matrix3D minv;
        minv.m[0][0] = (m[1][1] * m[2][2] - m[2][1]* m[1] [2]) * det();
        minv.m[0][1] = -(m[1][0] * m[2][2] - m[1][2]* m[2] [0]) * det();
        minv.m[0][2] = (m[1][0] * m[2][1] - m[2][0]* m[1] [1]) * det();
        minv.m[1][0] = -(m[0][1] * m[2][2] - m[0][2]* m[2] [1]) * det();
        minv.m[1][1] = (m[0][0] * m[2][2] - m[0][2]* m[2] [0]) * det();
        minv.m[1][2] = -(m[0][0] * m[2][1] - m[2][0]* m[0] [1]) * det();
        minv.m[2][0] = (m[0][1] * m[1][2] - m[0][2]* m[1] [1]) * det();
        minv.m[2][1] = -(m[0][0] * m[1][2] - m[1][0]* m[0] [2]) * det();
        minv.m[2][2] = (m[0][0] * m[1][1] - m[1][0]* m[0] [1]) * det();
        return minv;
    }
    Matrix3D operator +(Matrix3D mat)
    {
        Matrix3D temp;
        for(int i=0; i<3; i++)
            for(int j=0; j<3; j++)
                temp.m[i][j]=m[i][j]+mat.m[i][j];
        return temp;
    }
    Matrix3D operator -(Matrix3D mat)
    {
        Matrix3D temp;
        for(int i=0; i<3; i++)
            for(int j=0; j<3; j++)
                temp.m[i][j]=m[i][j]-mat.m[i][j];
        return temp;
    }
     Matrix3D operator *(Matrix3D mat)
    {
        Matrix3D temp;
        for(int i=0;i<3;i++)
            for(int j=0;j<3;j++)
                temp.m[i][j]=m[i][0]*mat.m[0][j]+m[i][1]*m[1][j]+m[i][2]*m[2][j];
        return temp;
    }
    void display()
    {

        for(int i=0;i<3;i++)
        {
            cout << "|\t";
            for(int j=0;j<3;j++)
                cout << m[i][j] << "\t";
            cout << "|" << endl;
        }
    }
};
int main()
{
    double arr[3][3]= {{3,20,55},{78,4,60},{77,89,51}};
    Matrix3D mat1(arr);
    cout << mat1.det() << endl;
    mat1.display();
    cout << endl;
    Matrix3D mat2(arr);
    mat2=mat1+mat2;
    mat2.display();
}
