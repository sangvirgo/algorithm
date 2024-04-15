// https://leetcode.com/problems/counter-ii/?envType=study-plan-v2&envId=30-days-of-javascript


/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
    // Tạo một đối tượng chứa các phương thức
    let temp=init;
    return {
        increment: () => {
            return ++temp;
        },
        decrement: () => {
            return --temp;
        },
        reset: () => {
            temp = init;
            return temp;
        }
    }
};


 const counter = createCounter(5)
 console.log(counter.increment()); // 6
 console.log(counter.reset()); //5
 console.log(counter.decrement()); // 4
/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */