#include <iostream>
#include <iomanip>


void recursive(int s, int x){
    if(s == x)
        return;
    std::cout << std::setw(s + 2) << std::setfill('*') << " " << std::endl;
    recursive(s+1, x);
    std::cout << std::setw(s + 1) << std::setfill('*') << " " << std::endl;
}

/*for(int i = 0; i <= s; ++i) //before recursion
        std::cout << "*";
    std::cout << std::endl;*/


/*for(int i = 0; i < s; ++i) //after recursion
        std::cout << "*";
    std::cout << std::endl;
    */
int main(){
    int input;
    char quit;
    do{
        std::cout << "Input the widthest width: ";
        std::cin >> input;
        recursive(0, input);
        std::cout << "Repeat(y/n): ";
        std::cin >> quit;
    }while(std::tolower(quit) == 'y');
    
}