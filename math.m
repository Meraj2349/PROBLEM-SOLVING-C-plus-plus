%ingradient 
f=@(x) 2^x - 5*x +2;
a=0;
b=1;

n =30;

if f(a)*f(b)<0

      for i=1:n
        c=(a+b)/2;
            if f(a)*f(c)<0
                   b=c;
            elseif f(b)*f(c)<0
                a=c;
            end
         fprintf('p %d=%.4f',i,c)

     end

    else 
        disp('error')

end


