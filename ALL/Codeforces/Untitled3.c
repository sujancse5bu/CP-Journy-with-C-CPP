int main()
{
    long long num, answer;
    unsigned int k, max_number_of_divisors;
    scanf("%I64d %d", &num, &k);

    vector <int> divisors;
    for(int i = 1; i*1LL*i <= num; i++)
        if(num%i == 0)
            divisors.push_back(i);

    max_number_of_divisors = 2*divisors.size();

    if(divisors.back()*1LL*divisors.back() == num)
        max_number_of_divisors--; //Square root gets counted twice

    if(k > max_number_of_divisors)
    {
        answer = -1;
    }
    else
    {
        if(k <= divisors.size())
            answer = divisors[k - 1];
        else
            answer = num/divisors[max_number_of_divisors - k ];
    }

    printf("%I64d\n", answer);
    return 0;
}

