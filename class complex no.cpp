#include<iostream>
using namespace std;
class ComplexNum{
private:
    int m_Realpart,m_Imgpart;
public:

    ComplexNum(){};
    ComplexNum(int RP,int IP){
         m_Realpart=RP;
         m_Imgpart=IP;
    }
    void Setvalue(int RP,int IP){
        m_Realpart=RP;
        m_Imgpart=IP;
    }
    void Print(){
        cout<<m_Realpart;
        if(m_Imgpart!=0){
            if(m_Imgpart>0) cout<<"+";
            cout<<m_Imgpart<<"i"<<endl;
        }
    }
    void add(ComplexNum c){
        m_Realpart+=c.m_Realpart;
        m_Imgpart+=c.m_Imgpart;
    }
    void subtract(ComplexNum c){
        m_Realpart-=c.m_Realpart;
        m_Imgpart-=c.m_Imgpart;
    }
    ComplexNum operator+(ComplexNum c){
        ComplexNum t;
        t.m_Realpart=m_Realpart+c.m_Realpart;
        t.m_Imgpart=m_Imgpart+c.m_Imgpart;
        return t;
    }
    ComplexNum operator-(ComplexNum c){
        ComplexNum t;
        t.m_Realpart=m_Realpart-c.m_Realpart;
        t.m_Imgpart=m_Imgpart-c.m_Imgpart;
        return t;
    }
    ComplexNum operator*(ComplexNum c){          ///(a+ib)(c+id)=a*c-b*d+(a*d+b*c)i
        ComplexNum t;
        t.m_Realpart=m_Realpart*c.m_Realpart-m_Imgpart*c.m_Imgpart;
        t.m_Imgpart=m_Realpart*c.m_Imgpart+m_Imgpart*c.m_Realpart;
        return t;
    }
    void operator=(ComplexNum c){
        m_Realpart=c.m_Realpart;
        m_Imgpart=c.m_Imgpart;
    }
    int RealPart() { return m_Realpart;}
    int ImgPart()  { return m_Imgpart;}
    };
ostream& operator<<(ostream &os,ComplexNum  c){
    os<<c.RealPart();
    if(c.ImgPart()>=0)  os<<"+";
        os<<c.ImgPart()<<"i"<<endl;
}
istream &operator>>(istream &is,ComplexNum &c){
    int r,i;
    is>>r>>i;
    c.Setvalue(r,i);
}
int main(){
    ComplexNum c1;
    c1.Setvalue(2,3);
    c1.Print();
    ComplexNum c2(5,-6);
    c2.Print();
    c1.add(c2);
    c1.Print();
    c1.subtract(c2);
    c1.Print();
    ComplexNum c4(2,3);
    ComplexNum  c5(5,-6);
    ComplexNum c3=c4+c5;
    c3.Print();
    ComplexNum c6=c4*c5;
    c6.Print();
    cout<<c4;
    ComplexNum c7;
    cin>>c7;
    ComplexNum c8;
    cin>>c8;
    cout<<c7<<c8;
    //ComplexNum c9=c7+c8;
   // cout<<c8;
    return 0;
}
