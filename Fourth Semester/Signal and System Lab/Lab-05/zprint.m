function[realPart,imgPart,magnitude, phaseInRad,phaseInDegree]= zprint(z)
realPart = real(z);
imgPart = imag(z);
magnitude = abs(z);
phaseInRad = angle(z); 
phaseInDegree= rad2deg(phaseInRad);
end


