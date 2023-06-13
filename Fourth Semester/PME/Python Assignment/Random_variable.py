'''
 Let X be the number of heads in three independent tosses 
of a coin. Find the pmf of X. (Binomial RV)
'''
from scipy import stats
import matplotlib.pyplot as plot
outcome_Zeta=[0,1]
size=len(outcome_Zeta)
prob=1/size
print(prob)
result=stats.binom.pmf(outcome_Zeta,2,prob)
print("P[x=0],P[x=1]= ",result)
plot.bar(outcome_Zeta, result)
plot.show()

