#include <cstdlib>
#include <stdlib.h>
#include <stdio.h>

#include <bits/stdc++.h>

#include <iostream>
#include <string>

int main(int argc, char* argv[]){
	
	// string options[] = {"-s","--silent",}


	std::system("cd ~");
	int MIN_VALUE = 1;
	int MAX_VALUE = 255;
	std::string IPADDR = "192.168.0.";
	std::string CMD_PING;
	const char * CHA;

	// for (int i;i<argc;i++){
		
	// 	std::string argv = argv[i];
	// 	std::cout << argv;
	// }

	for (MIN_VALUE; MIN_VALUE<MAX_VALUE; MIN_VALUE++){
		CMD_PING = "ping "+ IPADDR + std::to_string(MIN_VALUE)+" -n 1 -w 0";		
		CHA = CMD_PING.c_str();
		int i = std::system(CHA);
	}

	std::system("clear");
	std::cout << "BroadCast done" << std::endl;
	return 0;
}
