#include <stdio.h>

// GET THE RARITY OF THE POKEMON!

int getRarity(int inRarity){
	
	int pokeRarity;
	
	if(inRarity > 0 && inRarity <= 5){
		
		pokeRarity = 1;
		
	} else if(inRarity >= 6 && inRarity <= 10){
		
		pokeRarity = 2;
		
	} else if(inRarity >= 11 && inRarity <= 15){
		
		pokeRarity = 3;
		
	} else if(inRarity >= 16 && inRarity <= 20){
		
		pokeRarity = 4;
		
	} else if(inRarity >= 21 && inRarity <= 25){
		
		pokeRarity = 5;
		
	} else if(inRarity >= 26 && inRarity <= 30){
		
		pokeRarity = 6;
	}
	
	return pokeRarity;
}

// GET THE TYPE OF THE POKEMON!

int getType(int inType){
	
	char pokeType;
	
	if(inType == 1 || inType == 6 || inType == 11 || inType == 16 || inType == 21 || inType == 26){
		
		pokeType = 'D';
		
	} else if(inType == 2 || inType == 7 || inType == 12 || inType == 17 || inType == 22 || inType == 27){
		
		pokeType = 'C';
		
	} else if(inType == 3 || inType == 8 || inType == 13 || inType == 18 || inType == 23 || inType == 28){
	
		pokeType = 'B';
		
	} else if(inType == 4 || inType == 9 || inType == 14 || inType == 19 || inType == 24 || inType == 29){
		
		pokeType = 'A';
		
	} else if(inType == 5 || inType == 10 || inType == 15 || inType == 20 || inType == 25 || inType == 30){
		
		pokeType = 'S';
	}
	
	return pokeType;
}

// RARITY MULTIPLIER!

float getRarityMultiplier(int inRarityMultip){
	
	float pokeRarityMultip;
	float pokeRarityM[]={1.5, 2.0, 2.5, 3.0, 3.5, 4.0};
	
	if(inRarityMultip == 1){
		
		pokeRarityMultip = pokeRarityM[0];
		
	} else if(inRarityMultip == 2){
		
		pokeRarityMultip = pokeRarityM[1];
		
	} else if(inRarityMultip == 3){
		
		pokeRarityMultip = pokeRarityM[2];
		
	} else if(inRarityMultip == 4){
		
		pokeRarityMultip = pokeRarityM[3];
		
	} else if(inRarityMultip == 5){
		
		pokeRarityMultip = pokeRarityM[4];
		
	} else if(inRarityMultip == 6){
		
		pokeRarityMultip = pokeRarityM[5];
		
	}
	
	return pokeRarityMultip;
}

// GETTING VALUE OF TYPE

int getTypeValue(char inChar){
	
	int outVal;
	
	switch(inChar){
		
		case 'S':
			outVal = 500;
		break;
		
		case 'A':
			outVal = 200;
		break;
		
		case 'B':
			outVal = 100;
		break;
		
		case 'C':
			outVal = 50;
		break;
		
		case 'D':
			outVal = 10;
		break;
	}
	
	return outVal;
}

// GETTING SHINY, POPULAR, UNWANTED

int specialty(int inValue, int inputNum){
	
	int shiny, popular, unwanted, outputValue;
	 
	
	if(inputNum == 1 || inputNum == 3 || inputNum == 5 || inputNum == 7 || inputNum == 9){
		
		outputValue = inValue + 200;
		
	} else if(inputNum == 13 || inputNum == 19 || inputNum == 24 || inputNum == 25){
		
		outputValue = inValue * 10;
		
	} else if(inputNum >= 26 && inputNum <= 30){
		
		outputValue = inValue - 200;
		
	} else{
		
		outputValue = inValue;
	}

	if(outputValue < 0){
		
		outputValue = 0;
	}
	
	return outputValue;
	
}

// GETTING OVERALL VALUE OF A POKEMON

int getValue(float inRarity, int inType, int inputNum){
	
	int overallValue;
	
	overallValue = inRarity * inType;

	int finalValue = specialty(overallValue, inputNum);
	
	
	return finalValue;
}



// MAIN FUNCTION

int main(){
	
	int rarity;
	char type;
	float rarityMulti;
	int typeValue;
	int overallVal;
	int inNum;
	
	printf("Insert a Pokemon number, 1-30: ");
	scanf("%d", &inNum);
	
// Calling of functions and passing of values
	
	/*-----------------------------------------------------------
		Calls getRarity(),
		
		INPUT: user's input (INTEGER, 1-30)
		
		Finds RARITY VALUE (INTEGER) depending on the number input.
		
		OUTPUT: rarity (INTEGER)
	------------------------------------------------------------*/
	rarity = getRarity(inNum); 
	/*-----------------------------------------------------------
		Calls getType(), 
		
		INPUT: user's input (INTEGER, 1-30)
		
		Finds TYPE CLASS (CHARACTER) depending on the number input.
	
		OUTPUT: type (CHARACTER)
	-------------------------------------------------------------*/
		type = getType(inNum);
	/*-----------------------------------------------------------
		Calls getRarityMultiplier(), 
		
		INPUT: rarity ( INTEGER, 1-6, output of function getRarity() )
		
		Finds MULTIPLIER VALUE (FLOAT VALUE) depending on the rarity.
	
		OUTPUT: rarityMulti (FLOAT)
	-------------------------------------------------------------*/
		rarityMulti = getRarityMultiplier(rarity);
	/*-----------------------------------------------------------
		Calls getTypeValue(), 
		
		INPUT: type ( CHARACTER, S, A-D )
		
		Finds TYPE CLASS VALUE (INTEGER) depending on the character output from getType().
	
		OUTPUT: typeValue (INTEGER)
	-------------------------------------------------------------*/
		typeValue = getTypeValue(type);
	/*-----------------------------------------------------------
		Calls getValue(), 
		
		INPUT:  rarityMulti (FLOAT) typeValue (INTEGER) user input (inNum, INTEGER)
		
		Finds OVERALL VALUE (INTEGER) of the Pokemon by multiplying rarityMulti * typeValue.
		
		Also calls function specialty() to add additional values if qualified for it,
		if not qualified, returns the same value OR returns 0 if the value drops below 0
		from the specialty function.
	
		OUTPUT: overallVal (INTEGER)
	-------------------------------------------------------------*/
		overallVal = getValue(rarityMulti, typeValue, inNum);
	
// HELLO SIR! I've tested each function and they all work co dependently
// But I've made the output just one value, the overall value of the pokemon!
// Each value seperately from rarity and type are all correct! But I didn't
// decide to print them out individually.

	printf("Pokemon power/value: %d", overallVal);
	
	return 0;
}
