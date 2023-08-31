#include <cstdlib>
#include <stdlib.h>
#include <stdio.h>

#include <bits/stdc++.h>

#include <iostream>
#include <string>

int main(){
	std::system("cd ~");
	int MIN_VALUE = 1;
	int MAX_VALUE = 255;
	std::string IPADDR = "10.26.45.";
	std::string CMD_PING;
	
	const char * CHA;

	for (MIN_VALUE; MIN_VALUE<MAX_VALUE; MIN_VALUE++){
		
		
		CMD_PING = "ping "+ IPADDR + std::to_string(MIN_VALUE) ;		
		CHA = CMD_PING.c_str();
		int i = std::system(CHA);
		std::cout << std::to_string(i);
	}
	return 0;
}
