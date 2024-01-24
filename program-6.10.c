#include <stdio.h>

main()
{
	int chioce,a;
	
	printf("press 1 for English......\n");
	printf("press 2 for Hindi........\n");
	printf("press 3 for Gujrati......\n");
	
	printf("please press given nember for your choice...");
	scanf("%d",&chioce);
	
	switch(chioce){

      	case 1:
	     	printf("You have choice English.....\n\n");
	    	printf("press 1 for Internet Recharge...\n");
	    	printf("press 2 for Top-Up Recharge....\n");
	    	printf("press 3 for Special Recharge....\n");
	    	printf("Enter your choice a Recharge number..");
	    	scanf("%d",&a);

		switch(a){

     	case 1:
	    	printf("you have successfully done Internet Recharge...\n");
	    	break;

     	case 2:
	    	printf("you have successfully done Top-UP Recharge...\n");
	    	break;

     	case 3:
	    	printf("you have successfully done Special Recharge...\n");
	    	break;

     	default:
	    	printf("you Recharge Pack is not Availble...");
	    	

	}
	break;

     	case 2:
	    	printf("you have choice hindi......\n\n");
	    	printf("Internet Recharge ke liye 1 dabaiye..\n");
		    printf("Top-Up Recharge ke liye 2 dabaiye..\n");
	    	printf("Special Recharge ke liye 3 dabaiye..\n");
	    	printf("Enter your chioce Recharge number ");
	    	scanf("%d",&a);

		switch(a){
	
  			case 1:
				printf("Apne safaltapurvak Internet Recharge kar liya he..\n");
				break;

  			case 2:
				printf("Apne safaltapurvak Top-Up Recharge kar liya he..\n");
				break;

  			case 3:
				printf("Apne safaltapurvak Special Recharge kar liya he..\n");
				break;

  			default:
	  			printf("Recharge peckj nahi hai..");
	  			

		}
		break;

     		case 3:
			    printf("You have choice gujrati....\n\n");
	    		printf("Internet Recharge mate 1 dabavo....\n");
			    printf("Top-UP Recharge mate 2 dabavo....\n");
	    		printf("Special Recharge mate 3 dabavo....\n");
			    printf("Enter your chioce Recharge numer ");
			    scanf("%d",&a);

		switch(a){

   			case 1:
	 			printf("Tame safaltapurvak Internet Recharge karyu chhe..");
	  			break;

   			case 2:
	  			printf("Tame safaltapurvak Top-UP Recharge karyu chhe..");
	  			break;

   			case 3:
	  		printf("Tame safaltapurvak Special Recharge karyu chhe..");
	  		break;

   			default:
	   			printf("Tamr Recharge karyu nathi...");

		}
	break;
	}
	
}
