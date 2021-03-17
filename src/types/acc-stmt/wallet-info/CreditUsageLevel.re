  
type t =
  | Permissible
  | AlmostExceeded
  | Exceeded;

let fromString = (level: string): t => {
  switch (level) {
  | "Permissible" => Permissible
  | "AlmostExceeded" => AlmostExceeded
  | "Exceeded" => Exceeded
  | _ => raise(Not_found)
  };
};