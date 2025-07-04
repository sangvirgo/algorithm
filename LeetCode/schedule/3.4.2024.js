/**
 * @param {string} val
 * @return {Object}
 */
var expect = function(val) {
    return {
        toBe: (expect) => {
            if (val !== expect) {
                throw new Error("Not Equal");
            }
            return true;
        },
    
        notToBe: (expect) => {
            if (val === expect) {
                throw new Error("Equal");
            }
            return true;    
        }
    }
};


/**
 * expect(5).toBe(5); // true
 * expect(5).toBe(5); // throws "Equal"
 */