function result = isSamePosi(a, b)
%�ж��������Ƿ���ͬ

result = false;
if a(1,1) == b(1,1) && a(1,2) == b(1,2)
    result = true;
end

end