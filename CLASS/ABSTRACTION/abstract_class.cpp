#include <iostream>
#include "bird.h"
using namespace std;
void birdDoesSomething(Bird*&bird){
    bird->eat();
    bird->fly();
     bird->eat();
    bird->fly();
     bird->eat();
    bird->fly();
     bird->eat();
    bird->fly();

}

int main(){
Bird*bird = new eagle();
birdDoesSomething(bird);
}