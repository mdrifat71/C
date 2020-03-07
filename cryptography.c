#include <stdio.h>
void encrypt(int secret_key,char str[]);
void decrypt(int secret_key, char str[]);

int main(void)
{
	int choice;
	char str[100];
	printf("Enter your string:");
	scanf("%[^\n]s", str);
	do {
		printf("Encrypt\t 1\nDecrypt\t 2\nYour choice\t:");
		scanf("%d", &choice);
	}while (choice != 1 &&  choice != 2);

	if (choice == 1){
		int secret_key;
		printf("Type a key");
		scanf("%d", &secret_key);
		encrypt(secret_key,str);
	}else{
		int secret_key;
		printf("Type your secret key:");
		scanf("%i", &secret_key);
		decrypt(secret_key,str);
	}
}


void encrypt(int secret_key, char str[]){
	int store_key = secret_key;
	for (int i = 0; str[i] != '\0'; i++){
		secret_key = store_key; //store secret key

		//handelling special charecter
		if (str[i] > 31 && str[i] < 65){
			while(str[i] + secret_key > 64){
				secret_key = str[i] + secret_key - 64;
				str[i] = 31;
			}
			str[i] = str[i] + secret_key;
			continue;
		}

		//handelling alphabetic charecter
		while (str[i] + secret_key > 122){
			secret_key = str[i] + secret_key - 122;
			str[i] = 64;
		}
		str[i] = str[i] + secret_key;
	}
	printf("%s\n", str);
}

void decrypt(int secret_key, char str[]){
	int store_key = secret_key; //store the secret key
	for (int i = 0; str[i] != '\0'; i++){
		secret_key = store_key; //re-initializing secret_key

		//handelling special charecter
		if (str[i] > 31 && str[i] < 65){
                        while(str[i] - secret_key < 32){
				secret_key = 32 - (str[i] - secret_key);
				str[i] = 65;
			}
			str[i] = str[i] - secret_key;
			continue;
                }
		//handelling alphabetic charectar
		while (str[i] - secret_key < 65){
			secret_key = 65 - (str[i] - secret_key);
			str[i] = 123;
		}
		str[i] = str[i] - secret_key;
	}
	printf("%s\n", str);
}
