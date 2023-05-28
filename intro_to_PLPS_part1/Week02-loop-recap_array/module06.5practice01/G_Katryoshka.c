#include <stdio.h>

int main()
{
    long long int eye, mouth, body, ans=0;
    scanf("%lld %lld %lld", &eye, &mouth, &body);

    if (eye >= 0 && body >= 0 && mouth>=0)
    {
        if (eye < mouth && eye < body)
        {
            ans += eye;
            eye= eye-ans;
            mouth = mouth-ans;
            body= body- ans;
            printf("%lld", ans); 
        }
        else if (body < eye && body < mouth)
        {
            ans += body;
            eye= eye-ans;
            mouth = mouth-ans;
            body= body- ans;
            printf("%lld", ans);

        }
        else
        {
            ans += mouth;
            eye= eye-ans;
            mouth = mouth-ans;
            body= body- ans;
            eye = eye/2;
            if (eye<body)
            {
                ans+=eye;
                printf("%lld", ans);
            }
            else if(body<eye)
            {
                ans+=body;
                printf("%lld", ans);
            }
            
        }

    }

    return 0;
}