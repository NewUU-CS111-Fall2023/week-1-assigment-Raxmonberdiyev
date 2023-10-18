/*
 * Author: Raximberdi
 * Date: 10/17/2023
 * Name:
 */

#include <iostream>
#include <string>
class sinf{
public:
sinf(){
cout<<"Hello i am in constructor"<<endl;
}
~sinf(){
cout<<"Hello i am in distructor"<<endl;
}
void display(){
cout<<"Hello"<<endl;
}
};
int main() {
   sinf dosk;
    dosk.display();
    return 0;
}
