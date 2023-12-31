function [piApprox, absEr, relEr, x, y] = MontePi(n)
cnt = 0;
for i=1:n
    x = rand;
    y = rand;
    if (x^2+y^2) <= 1
        cnt = cnt + 1;
    end
end

piApprox = cnt / n * 4;
absEr = abs(pi-piApprox);
relEr = absEr / pi;

end