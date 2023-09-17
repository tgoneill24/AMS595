function [piApprox, absEr, relEr] = MontePi(n)
count = 0;
for i=1:n
    x = rand;
    y = rand;
    if (x^2+y^2) <= 1
        count = count + 1;
    end
end

piApprox = count / n * 4;
absEr = abs(pi-piApprox);
relEr = absEr / pi;

end