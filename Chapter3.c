#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*
    // Chapter 3 - challenge 1 - A number guesser
    // 11/4/2020 3:14 PM
    int random_number = 0;
    int random_guess = 0;
    srand(time(NULL));

    random_number = (rand() % 4) + 1;

    printf("\nWhat is the random number?\n");
    scanf("%d", &random_guess);

    if(random_guess == random_number){
        printf("\nThat is correct!");
    }else if(random_guess =! isdigit(random_number)){
        printf("\nThat is not a number.\n");
    }else{
        printf("\nSorry, that was the wrong number\n");
    }

     // Finished 11/4/2020 at 5:09 PM

     */


    /*
     // Chapter 3 - challenges 2 - A Chinese Zodiac fortune cookie

    int user_response = 0;

    printf("\nChoose a birth year.\n");
    printf("\n1\t1960, 1972, 1984, 1996, 2008, 2020\n");
    printf("\n2\t1961, 1973, 1985, 1997, 2009, 2021\n");
    printf("\n3\t1962, 1974, 1986, 1997, 2010, 2022\n");
    printf("\n4\t1963, 1975, 1987, 1998, 2011, 2023\n");
    printf("\n5\t1964, 1976, 1988, 1999, 2012, 2024\n");
    printf("\n6\t1965, 1977, 1989, 2000, 2013, 2025\n");
    printf("\n7\t1966, 1978, 1990, 2001, 2014, 2026\n");
    printf("\n8\t1967, 1979, 1991, 2002, 2015, 2027\n");
    printf("\n9\t1968, 1980, 1992, 2003, 2015, 2028\n");
    printf("\n10\t1969, 1981, 1993, 2004, 2016, 2029\n");
    printf("\n11\t1970, 1982, 1994, 2005, 2017, 2030\n");
    printf("\n12\t1971, 1983, 1995, 2006, 2018, 2031\n");
    scanf("%d", &user_response);

    switch(user_response){
    case 1:
        printf(" Dissension may be related to a professional problem. Keeping all your promises is essential. Your credibility depends on it. Beware of the spiritual appeals of sects or self-styled gurus. True religion should have nothing to do with money. Don't be afraid to give your opinion if you have good ideas to improve the performance of your business. Your family life may not be as harmonious as you'd like right now.\n");
        break;

    case 2:
        printf("Put your amorous outbursts aside for the time being. The occupation of your mind will be more profitable to you. Devote a little more time to family. In some affairs, you should make amends and recognize your errors. Today could be challenging, and you might have to adapt as you go along. You might need to act in a way exactly contrary to your habits. Write or telephone a dear friend who lives far from you.\n");
        break;
    case 3:
        printf("Avoid the trap of dispersion. Be methodical and punctual in all domains and success can be yours. Your family and friends won't know how to deal with you if you waver between being kind and aggressive. Single people have a great chance to make a significant encounter. If you're in a relationship, some material concerns may provoke heated discussions with your partner. Don't let your children spend too much time staring at screens.\n");
        break;
    case 4:
        printf("Your heart is full, and you believe in great passion and love. Preserve some of your illusions for your own good, but don't lose touch with reality. You may enjoy exceptional luck, which allows you to ease a potential crisis. Your material life could improve thanks to money coming from an unexpected source. You won't have to worry about your children today.\n");
        break;
    case 5:
        printf("Your friendships have a particular charm, and your friends appreciate you. Tackle new tasks without delay. Your financial projects prove satisfying and are achieved without much difficulty. Make a distinction between what's doable and what's inaccessible. Beware of romantic encounters that seem valuable in appearance but are unreliable on a long-term basis. Use your intuition.\n");
        break;
    case 6:
        printf("The astral influences incline you to moderation in romance. On the financial plane, watch out for impulsiveness and superficiality. Beware of fabulous proposals that may lead to nothing. Also, certain apparently charming persons could prove to be charlatans, reminding you that all that glitters is not gold. Stay away from temptation and curb your passion.\n");
        break;
    case 7:
        printf("Relations with your partner could face turmoil. Discussions might be stormy, and neither of you wants the other to have the last word. Be the more reasonable by speaking less and listening more. This astral climate could bring about money concerns or issues in your business. You can also expect some tension in professional relationships. You feel like a homebody now. Dragging you out of your cozy cocoon and your slippers will be difficult!\n");
        break;
    case 8:
        printf("You won't spare your efforts in order to consolidate your gains. Face any difficulties before it's too late. By trying to do two things at once, you'll end up doing neither. You run the risk of falling for an illusion. Concentrate on what's essential and pursue it without respite. Even if you are congratulated today, don't feel too proud. Try to keep a low profile.\n");
        break;
    case 9:
        printf("Single people could make more conquests than they can manage. Don't be careless. It's not by this route that you can realize your dreams. You may react instinctively and thoughtlessly to a situation, so beware! You could be a prey to various complicated annoyances related to an inheritance, succession or litigation. See that your children get regular exercise.\n");
        break;
    case 10:
        printf("Devote yourself to your loved ones. If harmony prevails and aggressiveness is banned from your relationships, things can go well. Your career situation looks good overall. You could be quite favored despite some small clouds here and there. You have original ideas, and you'll be supported and helped by your co-workers and family.\n");
        break;
    case 11:
        printf("You could begin a phase of deepening and consolidation. It will require self-confidence and optimism. Loneliness, the indifference of people, and boredom may have you looking for salvation in unusual and suspect groups. Don't let yourself be taken in by them. You could have an opportunity to access and obtain the support of influential people. You can profit well by these favorable astral influences.\n");
        break;
    case 12:
        printf(" Beware of overworking yourself! This is the main pitfall to avoid if you want to stay in good health and full possession of your capacities. There could be a few hiccups for those who pursue a professional activity. This astral climate can provoke friction and tension. You can understand the people you meet and sense their true intentions. In fact, it could be very difficult for anyone to deceive you or even conceal something from you now.\n");
        break;
    }


    */

    // Chapter 3 - Challenges 3 - Dice Game

    int dice_one = 0;
    int dice_two = 0;
    int sum_dice = 0;

    srand(time(NULL));

    dice_one = (rand() % 6) + 1;
    dice_two = (rand() % 6) + 1;
    sum_dice = dice_one + dice_two;


    if(sum_dice == 7 || sum_dice == 11){
        printf("You win!\n");
    }else{
        printf("%d\n", sum_dice);
        printf("Thanks for playing.\n");
    }


    return 0;
}
