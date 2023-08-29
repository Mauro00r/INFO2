using namespace std;
#include <iostream>

class punto {
 private:
 int x, y;
 public:
 punto();
 punto(int a, int b);
 ~punto();
 void cambio_cord(int a, int b);
 int print_x();
 int print_y();  
 };
 
//definicion de los metodos

punto::punto(int a, int b){ //constructor
 x=a;
 y=b;
 }
 
punto::punto(){ //constructor
 x=0;
 y=0;
 }
 
punto::~punto(){ //definicion
cout<< "\nel objeto se destruye\n";
} // es el equivalente a printf

void punto::cambio_cord(int a, int b){
x= a;
y= b;
}

int punto::print_x(){
return x;
}

int punto::print_y(){
return y;
}

int main(){
int a,b;
class punto p, p1(10,20);
cout<< "objeto p:";
cout<< "\nla coordenada en x es: " << p.print_x();
cout<< "\nla coordenada en y es: " << p.print_y();
cout<< "\nobjeto p1:";
cout<< "\nla coordenada en x es: " << p1.print_x();
cout<< "\nla coordenada en y es: " << p1.print_y();
cout<< "\nse cambia el estado del objeto p, ingresar coordenada x y luego y: ";
cin>> a;
cin>> b;
p.cambio_cord(a,b);
cout<< "\nse cambia el estado del objeto p1, ingresar coordenada x y luego y: ";
cin>> a;
cin>> b;
p1.cambio_cord(a,b);

cout<< "\nla nueva coordenada en x es: " << p.print_x();
cout<< "\nla nueva coordenada en y es: " << p.print_y();
cout<< "\nla nueva coordenada en x es: " << p1.print_x();
cout<< "\nla nueva coordenada en y es: " << p1.print_y();

return 0;
}
