numPoints = 50;

n = zeros(1,numPoints);
x = zeros(1,numPoints);
y = zeros(1,numPoints);
time = zeros(1,numPoints);
piApprox = zeros(1,numPoints);

for i=1:numPoints
    n(i)=floor(1.2^i);
    tic
    piApprox(i) = MontePi(n(i));
    time(i) = toc;
end


plot(n, time)
xlabel('n') 
ylabel('Execution Time')
figure
plot(n, piApprox)
xlabel('n') 
ylabel('Pi Approximation')

% Function is repeated here with added functionality to plot points as they
% are generated

n=397;
cnt = 0;
xin = [];
yin = [];
xout = [];
yout = [];
figure
xlabel('x') 
ylabel('y')
hold("on")
for i=1:n
    x = rand;
    y = rand;
    if (x^2+y^2) <= 1
        cnt = cnt + 1;
        xin = [xin x];
        yin = [yin y];
        scatter(xin, yin, 10, "blue", "filled")
    else
        xout = [xout x];
        yout = [yout y];
        scatter(xout, yout, 10, "red", "filled")
    end
    
    txt = strcat('Points Generated: ', string(i));
    title(txt)
    
    drawnow
end

txt = strcat('Pi Approximation: ', num2str(cnt/n*4, 5));
title(txt)
