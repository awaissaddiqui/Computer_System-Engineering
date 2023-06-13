'''
An urn contains two black balls and three white balls. Two 
balls are selected at random from the urn without 
replacement and the sequence of colors is noted. Find the 
probability that both balls are black.
P[A|b]=P[A inter B]/P[B]
'''
sample_space=["Black","Black","White","White","White"]
W=3
B=2
size_of_S=len(sample_space)

#P[B2 intersection B1]= P[B2|B1]/P[B1];

probability_B1=B/size_of_S
probability_W1=W/size_of_S

def Prob_B2_B1(sample_space, W, B):
    print("After one draw of black")
    newArray=sample_space.copy()
    newArray.remove("Black")
    newSize=len(newArray)
    B=B-1
    Prob_B2_B1=B/newSize
    Prob_W2_B1=W/newSize
    print(f"Probabilty of B2 given B1= {B}/{newSize} = ",Prob_B2_B1)
    print(f"Probabilty of W2 given B1= {W}/{newSize} = ",Prob_W2_B1)
    
    print(newArray)
    #print(newSize)

    return Prob_B2_B1

probabilty_B2_B1=Prob_B2_B1(sample_space, W, B)

P_B1_inter_B2=probabilty_B2_B1 * probability_B1
print("P[B1 |-| B2] = ",P_B1_inter_B2)


