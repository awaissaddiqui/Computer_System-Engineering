%Task-8
function specmat
n=input('please enter the size of matrix: ');
for  i=1:1:n;
    for j=1:1:n;
         if i==1 && j<=n;
         m(i,j)=1;
         else
         if i<=n && j==1;
         m(i,j)=1;
         else
         temp=m(i-1,j)+m(i,j-1);
             if temp<20;
                 m(i,j)=temp;
             else    
        if m(i-1,j)>m(i,j-1);
                  
                     m(i,j)=m(i-1,j);
                 else
                     m(i,j)=m(i,j-1);
                
         end
         end        
         end
         end
    end
end
disp(m);
