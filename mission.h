//
// mission.h
//
// 2020-10-10: Add WIGWAM_MULT_FACTOR to hold the rudder
//             multiplier used by wigwam.h
//
// 2020-06-24 Merge Completed
//
#ifdef P_TESTBED
#define WIGWAM_MULT_FACTOR 4
#else
#define WIGWAM_MULT_FACTOR 2
#endif

// WHICH PLANE?????????
#ifdef P_RIOTIII  
//                            action action  max    mission mission       jump num   {step   step   step}       
//                            time   cmd     alt    purpose name               steps  head   alt    durr
//                            (ms)          (ft)                          (ft)        (deg)  (ft)   (ms) 
// very simple (02/17/2020) climb 25 feet and same course!!!
// 20200919: set to A_LOCK with 5000 lock time
// 2020-10-07: retest A_TEMP
const planeMission mission = {5000, A_TEMP, 6200, O_HOLD, "M_RIOTIII_1", 25,  1,     0,     DYN_VAL, 0};   // <===== !!
#endif

//################################

#ifdef P_RIOTX
const planeMission mission = {10000, A_LOCK, 6000, O_HOLD, "M_RIOTX", 0, 1,      35,    5600, 0};          // <===== !!
#endif   

//################################

//                            action action max    mission mission    jump num   {step   step  step}       
//                            time   cmd    alt    purpose name           steps  head    alt   durr
//                            (ms)          (ft)                      (ft)       (deg)   (ft)  (ms)
#ifdef P_TESTBED
#if 0
const planeMission mission = {5000, A_LOCK, 6000, O_HOLD, "M_TESTBED4", 0, 4,      5,    5800,  30000,      // multi step
                                                                                  90,    3000,  30000,
                                                                                   5,    3000,  30000,
                                                                                  50,    5800,  0           // 
                             };
#else      
// I'm LIVE!!!!  ---------------------------HERE~                   
const planeMission mission = {15000, A_TEMP, 6000, O_HOLD, "M_TESTBED1", 0, 1,     0,    5800,  0};           // 1 step 
#endif
#endif
   
