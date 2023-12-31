function x = GaussElim(A,b)
%GaussElim Solves an nxn matrix system
%   Takes input of nxn matrix A and 1xn vector b and uses Gaussian
%   elimination to solve for x that satisfies Ax=b

if (ismatrix(A) && isnumeric(A))
    n = size(A,1);
    if (size(A,2) ~= n)
        error("A is not a square matrix")
    end

    bdim = size(b);
    if (bdim(1)~=1 || bdim(2)~=n)
        error("Dimensions of A incompatible with b")
    end

else
    error("A is not a numeric matrix")
end

% Store system as augmented matrix
aug = [A b.'];

% Convert to echelon form
for j = 1:n

    % If diagonal entry is 0, try to swap with a lower row
    if (aug(j,j)==0)
        zeroDiag = true;
        for k=j+1:n
            if (aug(k,j)~=0)
                aug([j, k], :) = aug([k, j], :);
                zeroDiag = false;
                break
            end
        end
    else
        zeroDiag = false;
    end

    % If all lower rows have 0 in the column, then skip this iteration
    % Otherwise perform elimination on rows j+1 through n
    jDiag = aug(j, j);
    jRow = aug(j,:);
    if ~zeroDiag
        for i=j+1:n
            aug(i,:) = aug(i,:) - aug(i,j)/jDiag*jRow;
        end
    end
    
end

% Convert to reduced echelon form
for i=1:n
    iDiag = aug(i, i);
    if iDiag ~= 0
        aug(i, :) = aug(i, :) / iDiag;
    else
        error("A is nonsingular")
    end
end

% Convert to reduced row echelon form
for i=1:n-1
    i1 = n - i;
    for i2 = i1+1:n
        aug(i1, :) = aug(i1, :) - aug(i2, :) * aug(i1, i2);
    end

end

% Return last column of augmented matrix
x = aug(:, n+1);

end