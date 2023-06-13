'''
An urn contains two black balls and three white balls. Two 
balls are selected at random from the urn without 
replacement and the sequence of colors is noted. Find the 
probability that the second ball is white (irrespective of 
first outcome).
'''

container=["white","white","white","black","black"]
sizeOfContainer=len(container)

whiteBall = len([x for x in container if x == 'white'])
blackBall = len([x for x in container if x == 'black'])

def find_prob_black(array, size , W, B):
    prob_B1=B/size
    array.remove("black")
    size-=1
    B-=1
    prob_W2_B1= W/size
    prob_B2_B1=B/size
    print("Probabilty_B1= ",prob_B1)
    print("After one withDraw : P[B2|B1]= ",prob_B2_B1)
    print("After one withDraw : P[W2|B1]= ",prob_W2_B1)
    return prob_W2_B1, prob_B1

def find_prob_white(array, size , W, B):
    prob_W1=W/size
    array.remove("white")
    size-=1
    W-=1
    prob_B2_W1= B/size
    prob_W2_W1=B/size
    print("Probabilty_W1= ",prob_W1)
    print("After one withDraw : P[W2|W1]= ",prob_W2_W1)
    print("After one withDraw : P[B2|W1]= ",prob_B2_W1)
    return prob_W2_W1,prob_W1

P_W2_B1,P_B1=find_prob_black(container, sizeOfContainer, whiteBall, blackBall)
P_W2_W1,P_W1=find_prob_white(container, sizeOfContainer, whiteBall, blackBall)
def find_Prob_W2(P_W2B1,P_B1,P_W2W1,P_W1):
    probability_W2=(P_W2B1*P_B1)+(P_W2W1*P_W1)
    print("probability that the second ball is white P[W2]= ",probability_W2)

find_Prob_W2(P_W2_B1,P_B1,P_W2_W1,P_W1)




