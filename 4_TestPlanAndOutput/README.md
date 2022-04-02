# Test Plan #
### Low  level test plan ###
Test_ID | Description | Ex I/p | Ex O/P | Actual output | Type of test
------- | ----------- | ------ | ------ | ---------- | ------------
H_01    |  Test the discount is 0 if grand total is less than 100 |     n<100      | 0 | 0 | technical
H_02    |  Test the discount is 0 if grand total is greater than 100 and less than 500 |     n>=100 && n<500     | 0.1 | 0.1 | technical
H_03    |  Test the discount is 0 if grand total is less than 1000 and greater than 500 |     n>=500 && n<1000       | 0.2 | 0.2 | technical
H_04    |  Test the discount is 0 if grand tota is greater than 1000 and less than 1500 |     n<1500  && n>=1000     | 0.32 | 0.32 | technical
H_05    |  Test the discount is 0 if grand total is greater than 2000 |     n>=2000      | 0.45 | 0.45 | technical
H_06    |  Test gst added is 100 |    1000      | 100 | 100 | technical
H_07    |  Test gst added is 100 |    50000.90  | 100 | 100 | technical
H_08    |  Test gst added is 100 |    67900.999 | 100 | 100 | technical
H_09    |  Test gst added is 20% | 100   | 20 | 20 | technical
H_10    |  Test gst added is 20% | 200  | 20 | 20 | technical
H_11    |  Test gst added is 20% |  124 | 20 | 20 | technical
H_12    |  Test option 1 is working properly | 1 | 1 | 0 | technical
H_13    |  Test option 2 is working properly | 2 | 2 | 0 | technical
H_14    |  Test option 3 is working properly | 3  | 3 | 0 | technical
H_15    |  Test option 4 is working properly | 4 | 3 | 0 | technical
H_16    |  Test option 0 is inavlid | 0 | 0 | 0 | technical
H_17    |  Test option -1 is invalid | 0 | 0 | 0 | technical
H_18    |  Test option 29 is invalid | 0 | 0 | 0 | technical

### Low level tesl plan ###
Test_ID | Description | Ex I/p | Ex O/P | Actual output | Type of test
------- | ----------- | ------ | ------ | ---------- | ------------
H_01    |  Test the discount is 0 if grand total is less than 100 |     n<100      | 0 | 0 | technical
H_02    |  Test the discount is 0 if grand total is greater than 100 and less than 500 |     n>=100 && n<500     | 0.1 | 0.1 | technical
H_03    |  Test the discount is 0 if grand total is less than 1000 and greater than 500 |     n>=500 && n<1000       | 0.2 | 0.2 | technical
H_04    |  Test the discount is 0 if grand tota is greater than 1000 and less than 1500 |     n<1500  && n>=1000     | 0.32 | 0.32 | technical
H_05    |  Test the discount is 0 if grand total is greater than 2000 |     n>=2000      | 0.45 | 0.45 | technical
