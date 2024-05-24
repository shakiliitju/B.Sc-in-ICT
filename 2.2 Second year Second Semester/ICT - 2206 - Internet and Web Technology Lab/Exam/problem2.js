
throw expression;
throw 'Error2';
throw 42;         
throw true;      
throw {toString: function() { return "I'm an object!"; } };

function UserException(message) {
    this.message = message;
    this.name = 'UserException';
  }

  UserException.prototype.toString = function() {
    return `${this.name}: "${this.message}"`;
  }
  
  throw new UserException('Value too high');