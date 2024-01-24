%ingredient
f=@(x) x^3 -4*x -9;

a=3;
b=2;
n=100;

if f(a)*f(b)<0
    for i=1:n
        c=(a+b)/2;

        fprintf('%f   ',c)
        if f(a)*f(c)<0
            b=c;
        elseif f(b)*f(c)>0
            a=c;
        end   
    end
else

    fprintf('Error ')

end


