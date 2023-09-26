


'''
The values and prob arguments are converted to NumPy
 arrays using np.asarray() to ensure that they can be used
 for mathematical operations.
'''
import numpy as np
def expected_value(values, prob):
    values = np.asarray(values)
    prob = np.asarray(prob)
    return (values * prob).sum() / prob.sum()


zeta=["HHH", "HHT", "HTH", "HTT", "THH", "TTH", "THT", "TTT"]
values = [0, 1, 2, 3]
size=len(values)

probs  = [1/size, 3/size, 3/size, 1/size]


result=expected_value(values, probs)
print("S_x= ",zeta)
print("E[X]= ",result)