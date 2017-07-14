#include <iostream>
#include <cstdlib>

int main() {
	double unkoAmount = 0.7;	// 0.0から1.0の実数
	
	std::cout << "Hello, Unko!!" << std::endl;
	std::cout << "Hello, Geri" << std::endl;

	cout << "My unko Num : " << unkoAmount << endl;

	if( unkoAmount >= 1.0 ) {
		std::cout << "Buri Buri" std::endl;
		unkoAmount -= 1.0;
	}
		
	return EXIT_SUCCESS;

}
