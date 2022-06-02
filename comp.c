/*
    General Rules for the entire program:
    * Assume that the input given to the functions are valid elements. 
        No need for error checking.
    * Assume the number of kilos is always a number greater than zero.
    * For the entire program, loops are not allowed to be used.
    * For the entire program, arrays and structures are not allowed 
        to be used.
*/
#include "comp.h"

/*
    This function should return the period associated with the element 
    given the atomic number. As shown in the figure, the period is the 
    row number of the periodic table.
    
    Coding Rule: a single chain of if-else statements can be used. 
        Nested statements are not allowed.
*/
int getPeriod(int nAtomicNum){
	
	int elementPeriod;
	
	if(nAtomicNum == 1 || nAtomicNum == 2){
		
		elementPeriod = 1;
		
	} else if(nAtomicNum >= 3 && nAtomicNum <= 10){
		
		elementPeriod = 2;
		
	} else if(nAtomicNum >= 11 && nAtomicNum <= 18){
		
		elementPeriod = 3;
		
	} else if(nAtomicNum >= 19 && nAtomicNum <= 36){
		
		elementPeriod = 4;
		
	} else if(nAtomicNum >= 37 && nAtomicNum <= 54){
		
		elementPeriod = 5;
		
	} else if(nAtomicNum >= 55 && nAtomicNum <= 86){
		
		elementPeriod = 6;
		
	} else if(nAtomicNum >= 87 && nAtomicNum <= 118){
		
		elementPeriod = 7;
		
	} 
	
	
    return elementPeriod;
}

/*
    This function should return the group associated with the element 
    given the atomic number. As shown in the figure, the period is the 
    column number of the periodic table.
    
    Coding Rule: cannot brute force this answer. This includes but not 
        limited to:
        * The use of “==” or similar equations like “x>=VAL && x<=VAL” 
            more than 15 times.
        * Switch statement with more than 15 cases.
        * Nested chain of if-else statements with more than 15 conditional 
            constructs.
        * Code longer than 40 lines of code should be suspected though not 
            automatically considered to be brute force.

*/

// I THINK I BRUTE FORCED THIS BUT I WANTED TO TRY

int getGroup(int nAtomicNum){
	
	int group = 0;
	int groupAdd = 0;
	int startAtomicNum;
	int startGroup;
	int outputGroup;
	
	if(nAtomicNum >= 1 && nAtomicNum <= 2){
		
		startAtomicNum = 1;
		startGroup = 1;
		while(startAtomicNum < nAtomicNum){
			
		startAtomicNum++;
		startGroup++;
		
	} }else if(nAtomicNum >= 3 && nAtomicNum <= 10){
		
		startAtomicNum = 3;
		startGroup = 1;
		while(startAtomicNum < nAtomicNum){
			
		startAtomicNum++;
		startGroup++;
		
	} }else if(nAtomicNum >= 11 && nAtomicNum <= 18){
		
		startAtomicNum = 11;
		startGroup = 1;
		while(startAtomicNum < nAtomicNum){
			
		startAtomicNum++;
		startGroup++;
		
	} }else if (nAtomicNum >= 19 && nAtomicNum <= 36){
		
		startAtomicNum = 19;
		startGroup = 1;
		while(startAtomicNum < nAtomicNum){
			
		startAtomicNum++;
		startGroup++;
		
	} }else if(nAtomicNum >= 37 && nAtomicNum <= 54){
		
		startAtomicNum = 37;
		startGroup = 1;
		while(startAtomicNum < nAtomicNum){
			
		startAtomicNum++;
		startGroup++;
		
	} }else if(nAtomicNum >= 55 && nAtomicNum <= 56){
		
		startAtomicNum = 55;
		startGroup = 1;
		while(startAtomicNum < nAtomicNum){
			
		startAtomicNum++;
		startGroup++;
		
	} }else if(nAtomicNum >= 71 && nAtomicNum <= 86){
		
		startAtomicNum = 71;
		startGroup = 3;
		
		while(startAtomicNum < nAtomicNum){
			
		startAtomicNum++;
		startGroup++;
		
	} }else if(nAtomicNum >= 87 && nAtomicNum <= 88){
		
		startAtomicNum = 87;
		startGroup = 1;
		while(startAtomicNum < nAtomicNum){
			
		startAtomicNum++;
		startGroup++;
		
	} }else if(nAtomicNum >= 103 && nAtomicNum <= 118){
		
		startAtomicNum = 103;
		startGroup = 3;
		
		while(startAtomicNum < nAtomicNum){
			
		startAtomicNum++;
		startGroup++;
		
	} }else if(nAtomicNum >= 57 && nAtomicNum <= 70){
		
		startAtomicNum = 57;
		startGroup = 3;
		
		while(startAtomicNum < nAtomicNum){
			
		startAtomicNum++;
		startGroup++;
		
	} }else if(nAtomicNum >= 89 && nAtomicNum <= 102){
		
		startAtomicNum = 89;
		startGroup = 3;
		
		while(startAtomicNum < nAtomicNum){
			
		startAtomicNum++;
		startGroup++;
		
	}
	
	}
	
	group = startGroup;
	outputGroup = group;
	
    return outputGroup;
}

/*
    This function checks if the element is a Lanthanide. The function 
    will return 1 if the element associated with the atomic number is 
    in the correct category and 0 otherwise.
    
    Coding Rule: No “==” statements nor switch statements can be used. 
        <= and >= statements are permitted.
*/
int isLanthanides(int nAtomicNum){
	
	int lanthanide;
	
	if(nAtomicNum >= 57 && nAtomicNum <= 71){
		
		lanthanide = 1;
		
	} else{
		
		lanthanide = 0;
		
	}
	
    return lanthanide;
}

/*
    This function checks if the element is an Actinide. The function 
    will return 1 if the element associated with the atomic number is 
    in the correct category and 0 otherwise.
    
    Coding Rule: use a switch statement only.
*/
int isMetalloids(int nAtomicNum){
	
	int metalloid;
	int metalloidTrue = 1;
	int metalloidFalse = 0;
	
	switch(nAtomicNum){
		
		case 5:
			metalloid = metalloidTrue;
		break;
		
		case 14:
			metalloid = metalloidTrue;
		break;
		
		case 32:
			metalloid = metalloidTrue;
		break;
		
		case 33:
			metalloid = metalloidTrue;
		break;
		
		case 51:
			metalloid = metalloidTrue;
		break;
		
		case 52:
			metalloid = metalloidTrue;
		break;
		
		default:
			metalloid = metalloidFalse;
		break;
	} 
	
	
	
    return metalloid;
}

/*
    This function checks if the element is a Transition Metal. The 
    function will return 1 if the element associated with the atomic 
    number is in the correct category and 0 otherwise.
    
    Coding Rule: Only use a single “if” statement. No “else” statements 
        are allowed.
*/
int isTransitionMetals(int nAtomicNum){
	
	int transMetal = 0;
	
	if((nAtomicNum >= 21 && nAtomicNum <= 30) || (nAtomicNum >= 39 && nAtomicNum <= 48) || (nAtomicNum >= 72 && nAtomicNum <= 80) || (nAtomicNum >= 104 && nAtomicNum <= 112)){
		
		transMetal += 1;
		
	}
	
    return transMetal;
}

/*
    This function checks if the element is a Noble Gas. The function 
    will return 1 if the element associated with the atomic number is 
    in the correct category and 0 otherwise.
    
    Coding Rule: None. Any method can be used to complete this (because 
        they are noble to the student).
*/
int isNobleGas(int nAtomicNum){
	
	int nobleGas = 0;
	if(nAtomicNum == 2 || nAtomicNum == 10 || nAtomicNum == 18 || nAtomicNum == 36 || nAtomicNum == 54 || nAtomicNum == 86 || nAtomicNum == 118){
		
		nobleGas += 1;
	}
	
	
    return nobleGas;
}

/*
    His function takes in an element’s atomic number and the number of 
    kilos to be bought and returns the price of the material. In the event 
    the element is not sold by the merchant, the price returned is zero.
    
    Coding Rule: use isLanthanides, isMetalloids, isTransitionMetals and 
        isNobleGas functions.
*/
int getPrice(int nAtomicNum, int nKilos){
	
	int price = 0;
	int availability = 4;
	
	int period = getPeriod(nAtomicNum);
	int periodAddPrice;
	int group = getGroup(nAtomicNum);
	
	if(period == 4){
		
		periodAddPrice += 1000;
		
	} else if(period == 5){
		
		periodAddPrice += 4000;
		
	} else if(period == 6){
		
		periodAddPrice += 9000;
		
	} else if(period == 7){
		
		periodAddPrice += 16000;
		
	}
	
	int lanthanide = isLanthanides(nAtomicNum);
	int metalloid = isMetalloids(nAtomicNum);
	int transMetals = isTransitionMetals(nAtomicNum);
	int nobleGas = isNobleGas(nAtomicNum);
	
	if(lanthanide == 1){
		
		price += 8000;
		
	} else {
		
		availability--;
	}
	
	// I COULDNT FIND OUT HOW TO SOLVE GROUP NUMBER NVM I DID IT YAY!
	
	if(metalloid == 1){
		
		price += 800 * group;
		
	} else {
		
		availability--;
		
	}
	
	if(transMetals == 1){
		
		price += periodAddPrice;
		
	} else {
		
		availability--;
	}
	
	if(nobleGas == 1){
		
		price = nAtomicNum / 2;
		price *= 750;
		
	} else {
		
		availability --;
		
	}
	
	price *= nKilos;
	
	if(availability == 0){
		
		price = 0;
		
	}
	
	
    return price;
}

