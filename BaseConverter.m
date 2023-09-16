n = input("Enter an integer from 2 to 10: ");

% Check validity of n
if floor(n)==n
    if (n<2 || n>10)
        error("Entry out of range")
    end
else
    error("Non-integer entry")
end

num = input(strcat("Enter a number in base-", num2str(n), ": "), "s");
m = input("Enter an integer from 2 to 10: ");

% Check validity of m
if floor(m)==m
    if (m<2 || m>10)
        error("Entry out of range")
    end
else
    error("Non-integer entry")
end

% Convert num to character array and check for negative sign
numarray = char(num);
numValue = 0;
inputLength = length(numarray);
if numarray(1) == '-'
    numarray = numarray(2:inputLength);
    inputLength = inputLength - 1;
    negative = true;
else
    negative = false;
end

% Calculate the value of num
for i=1:inputLength
    curChar = numarray(i);
    if isstrprop(curChar, 'digit')
        numValue = numValue + str2double(curChar)*n^(inputLength-i);
    else
        error("Number entered was invalid")
    end
end

% Calculate and print num converted to base m
result=n2basem(numValue, m, []);
if negative
    sign = "-";
else
    sign = "";
end
fprintf("Your number in base %i is %s%s\n", m, sign, result)


function numBaseM = n2basem(num, base, digits)

    % find greatest power of base that is less than or equal to num
    i = 0;
    while num >= base^(i+1)
        i = i+1;
    end
    greatPow = base^i;

    % find greatest multiple of greatPow that is less than or equal to num
    j = 1;
    while num >= (j+1)*greatPow
        j = j+1;
    end
    
    % set the (i+1)th digit of the result to j
    digits(i+1) = j;
    
    % if the number is complete, return it, otherwise call the function on
    % the rest of the number
    if num == j*greatPow
        numLength = length(digits);
        output = zeros(1:numLength);
        for i=1:numLength
            digit = digits(numLength - i + 1);
            output(i)=num2str(digit);
        end
        numBaseM=output;
    else
        numBaseM=n2basem(num - j*greatPow, base, digits);
    end
end