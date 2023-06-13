'''
suppose the probability of the weather being cloudy is 40%.
The probability of rain on given day is 20%. Also the 
prob of clouds on a rainy day is 85%.
If it's cloudy outside on a given day, what is the probability that it will rain that day?
'''

def bayesTheorem(pR, pC, pCR):
    return pR * pCR / pC

#define probabilities
pRain = 0.2
pCloudy = 0.4
pCloudyRain = 0.85


prob_rain_cloudy=bayesTheorem(pRain, pCloudy, pCloudyRain)
print("P[Rainy| cloudy]= ",prob_rain_cloudy)