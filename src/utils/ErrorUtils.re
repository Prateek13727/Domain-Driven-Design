let raiseError = (~path: string, ~message: string, ~value: string="") => {
  failwith(path ++ " : " ++ message ++ " - " ++ value);
};
